################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../package_task\ addition/main.cpp 

OBJS += \
./package_task\ addition/main.o 

CPP_DEPS += \
./package_task\ addition/main.d 


# Each subdirectory must supply rules for building sources it contributes
package_task\ addition/main.o: ../package_task\ addition/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -pthread -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"package_task addition/main.d" -MT"package_task\ addition/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


