/**
 * @file servo.c
 * @author Dongyun wang
 * @brief This is the driver for the servo of arduino
 * @version 0.1
 * @date 2023-12-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <wiringPi.h>
#include <stdio.h>

#define SERVO_PIN 1 // using the GPIO of raspberry pi

void setServoAngle(int angle)
{
    int pulse_width = angle_to_pulse_width(angle);
    pwmWrite(SERVO_PIN, pulse_width);
}

int angle_to_pulse_width(int angle)
{
    // 将角度转换为PWM脉冲宽度
    // 具体转换逻辑取决于伺服电机的规格
}

int main()
{
    if (wiringPiSetup() == -1)
    {
        printf("Setup wiringPi failed!");
        return 1;
    }

    pinMode(SERVO_PIN, PWM_OUTPUT); // 设置引脚为PWM输出

    // 控制伺服电机
    setServoAngle(90); // 设置伺服角度为90度

    return 0;
}

