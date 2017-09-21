################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../In\ Progress/ConvertCompassBearingToDirection.c \
../In\ Progress/LoanCalculator.c 

OBJS += \
./In\ Progress/ConvertCompassBearingToDirection.o \
./In\ Progress/LoanCalculator.o 

C_DEPS += \
./In\ Progress/ConvertCompassBearingToDirection.d \
./In\ Progress/LoanCalculator.d 


# Each subdirectory must supply rules for building sources it contributes
In\ Progress/ConvertCompassBearingToDirection.o: ../In\ Progress/ConvertCompassBearingToDirection.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"In Progress/ConvertCompassBearingToDirection.d" -MT"In\ Progress/ConvertCompassBearingToDirection.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

In\ Progress/LoanCalculator.o: ../In\ Progress/LoanCalculator.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"In Progress/LoanCalculator.d" -MT"In\ Progress/LoanCalculator.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


