#ifndef __PWM_H__
#define __PWM_H__

/*pwm.h: function and macro definition of PWM API , driver level */
/*user_light.h: user interface for light API, user level*/
/*user_light_adj: API for color changing and lighting effects, user level*/


 /*NOTE!!  : DO NOT CHANGE THIS FILE*/

 /*SUPPORT UP TO 8 PWM CHANNEL*/
#define PWM_CHANNEL_NUM_MAX 8 

struct pwm_param {
    unsigned int period;
    unsigned int freq;
    unsigned int  duty[PWM_CHANNEL_NUM_MAX];  //PWM_CHANNEL<=8
};


/* pwm_init should be called only once, for now  */
void pwm_init(unsigned int period, unsigned int *duty,unsigned int pwm_channel_num,unsigned int (*pin_info_list)[3]);
void pwm_start(void);

void pwm_set_duty(unsigned int duty, unsigned char channel);
unsigned int pwm_get_duty(unsigned char channel);
void pwm_set_period(unsigned int period);
unsigned int pwm_get_period(void);

unsigned int get_pwm_version(void);
void set_pwm_debug_en(unsigned char print_en);

#endif

