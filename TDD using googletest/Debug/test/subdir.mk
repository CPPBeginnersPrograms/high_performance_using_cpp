################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/mathtest.cpp 

OBJS += \
./test/mathtest.o 

CPP_DEPS += \
./test/mathtest.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -Ipthread -I"/Users/raswantkoushikpeesapati/high_performance_app/TDD using googletest/googletesting" -I"/Users/raswantkoushikpeesapati/high_performance_app/TDD using googletest/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


