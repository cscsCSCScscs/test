 #include <stdio.h>
#include <string.h>
 char CheckStatus[12] = ":001state\n";//查询模块状态 idle&busy
 char ReadInfo[12] = ":001idn\n"; //读取模块产品信息
 char ReadID[12] = ":000r_id\n"; //读取模块的 ID
 char SetID[12] = "w_id"; //写入模块 ID(%03d),立即生效并自动保存该参数
 char Set232baud[12] = "w_baud1";//设置 USB-RS232 波特率，立即生效并自动保存该参数
 char Set485baud[12] = "w_baud2"; //设置 RS485 端口波特率，立即生效并自动保存该参数
 char SetSampMode[20] = "w_system_samp";//配置 ADC 采样模式 0:连续模式;1:单次采样(V19.6 版)
 char ReadSampMode[20] = "r_system_samp";//读取 ADC 采样模式(V19.6 版) 
 char ResetSys[20] = "w_system_reset";//系统从新复位初始化，不是恢复出厂设置(V19.3 版)
 char SaveFlash[20] = "save_to_flash";//把用户配置在 RAM 中参数保存到 flash，掉电不丢失，不建议频繁保存
 char Default[12] = "default";//所有用户配置的参数恢复出厂设置
 
 char SetSensorSampleTime[12] = "w_ft";//设置传感器采样周期，所有通道同步采样，立即执行，暂存在 RAM
 char ReadSensorSampleTimeList[12] = "r_ft";//读取传感器采样时间索引号
 char ReadSensorSampleTime[12] = "r_ftms";//读取传感器采样时间 ms(V1.5 版本)
 
 char SetAdcGainvalue[12] = "w_gain";//设置传感器硬件增益，立即执行，暂存在 RAM
 char ReadAdcGainvalue[12] = "r_gain";//读取传感器增益索引号
 char ReadAdcGainRealvalue[12] = "r_gainx";//读取传感器增益实际值(V1.5 版本)
 
 char ReadRGBAdc[12] = "rgbw";//读取传感器 RGBW 原始 ADC 值，无校准的数据
 char ReadRGBU8[12] = "r_u8_rgb";//读取经过换算到 0-255 范围的 RGB
 char ReadRGBU8andP[12] = "r_rgbi";//读取换算到 0-255 范围的 RGB 和相对功率强度 I(0-100%)

 char Readhsli[12] = "r_hsli";//读取色度/饱和度/亮度/相对亮度 I(0-100%)
 
 char SetLuxK[12] = "w_k_lux";//写入 lux 补偿系数,立即执行，暂存于 RAM 中
 char ReadLuxK[12] = "r_k_lux";//读取光功率补偿系数 k(%0.3f)默认为 1.0;
 char SetUWK[12] = "w_k_uw";//写入光功率补偿系数,立即执行，暂存于 RAM 中
 char ReadUWK[12] = "r_k_uw";//读取光功率补偿系数 k(%0.3f)默认为 1.0;


 
int main ()
{
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;
 
   /* 复制 str1 到 str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );
 
   /* 连接 str1 和 str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );
 
   /* 连接后，str1 的总长度 */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );
 
   return 0;
}