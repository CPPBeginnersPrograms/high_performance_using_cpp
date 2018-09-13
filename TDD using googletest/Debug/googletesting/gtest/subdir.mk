################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../googletesting/gtest/gtest-all.cc 

CC_DEPS += \
./googletesting/gtest/gtest-all.d 

OBJS += \
./googletesting/gtest/gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
googletesting/gtest/%.o: ../googletesting/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -Ipthread -I"/Users/raswantkoushikpeesapati/high_performance_app/TDD using googletest/googletesting" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


