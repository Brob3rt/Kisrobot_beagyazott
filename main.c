/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"


    typedef enum 
    {
        Idle_state,      
        Seek_line, 
        Line_left, 
        Line_right,
        No_line, 
        On_line,

        
    } states;
    /*állapotok_______________________________________________________________*/

    typedef enum 
    {
        Dont_seek_line,
        IRL_detect,
        IRR_detect,
        No_line_seen, 
        On_line_seen,
        Btn_pressed,

    } events;
    /*eventek_________________________________________________________________*/

    events Readevent(int16 sensorLeft,int16 sensorRight, int16 Start_btn){      
        if(Start_btn == 1){
            
         return Btn_pressed;
        }
        
        if(sensorLeft ==0 && sensorRight ==0){
        
            return No_line_seen;
        }
        if(sensorRight ==1 && sensorLeft ==1){
                    
            return On_line_seen;
        }
        if(sensorRight ==1 && sensorLeft ==0){
               
            return IRR_detect;
        }
        if(sensorLeft ==1 && sensorRight ==0){
            
            return IRL_detect;
        }
        return Dont_seek_line;

    }
    
    events Btn_check() {
        
        return Dont_seek_line;
    }
    /* event handler__________________________________________________________*/

    void setspeed(int16 left, int16 right){
        int8_t killcontrol=0;
        if(left<0){
            PWM_L_WriteCompare(-1*left);
            Left_mot_dir_Write(1);
        }else{
            PWM_L_WriteCompare(left);
            Left_mot_dir_Write(0);
        }
       if(right<0){
            PWM_R_WriteCompare(-1*right);
            Right_mot_dir_Write(1);
        }else{
            PWM_R_WriteCompare(right);
            Right_mot_dir_Write(0);
        } 
        if(left==0){
            killcontrol=1;
        }
        
        if(right==0){
            killcontrol=killcontrol+2;
        }
        Reg_PWM_Start_Write(killcontrol);
    }
    /*sebesség beállítása_____________________________________________________*/
    
    uint32_t lasttime=0;
    uint8_t ismytimer(){
        uint32_t now = CySysTickGetValue();
        if(now-lasttime > 100){
            return 1;
        }
        return 0;
    }
    /*időzítő_________________________________________________________________*/

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    PWM_L_Start();
    PWM_R_Start();
    setspeed(0,0);
    CySysTickStart();
    /*int16 sensorLeft=IR_L_Read();
    int16 sensorRight=IR_R_Read(); */ 
    states Newstate = Idle_state;
    events Newevent;



    for(;;)
    {


        while(1){    
     
        if(ismytimer()){

        
        Newevent = Readevent(IR_L_Read(),IR_R_Read(), Start_Read());
        switch(Newstate){

            case Idle_state:
              if(Newevent == Btn_pressed){
                    Newstate = Seek_line;
                }else
            
                    Newstate = Idle_state;
            
                break;
  
            case Seek_line:
            
 
            
                if(IRR_detect == Newevent){
                    Newstate = Line_left;
                    }
                else if(IRL_detect == Newevent){
                    Newstate = Line_right;
                    }
                else if(No_line_seen == Newevent){
                    Newstate = No_line;
                    }
                else if(On_line_seen == Newevent){
                    Newstate = On_line;
                }               
                break;   
                
            case Line_left:
                setspeed(100,10);
                Newstate = Seek_line;
                break;
                
            case Line_right:
                setspeed(10,100);
                Newstate = Seek_line;
                break;
                
            case No_line:
                setspeed(80,80);
                Newstate = Seek_line;
                break;
                
            case On_line:
                setspeed(50,50);
                Newstate = Seek_line;
                break;
             
            default:
                setspeed(0,0);        
                }    
            }
        }
    }
}

/* [] END OF FILE */
