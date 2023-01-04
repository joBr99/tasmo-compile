#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_


#define USE_VINDRIKTNING
#define USE_I2C
#ifndef USE_BH1750
#define USE_BH1750      // [I2cDriver11] Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
#endif
#ifndef USE_BMP
#define USE_BMP     // [I2cDriver10] Enable BMP085/BMP180/BMP280/BME280 sensors (I2C addresses 0x76 and 0x77) (+4k4 code)
#endif



#endif  // _USER_CONFIG_OVERRIDE_H_
