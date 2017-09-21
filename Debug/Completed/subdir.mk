################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Completed/BoilingAndFreezingOfFehKev.c \
../Completed/DisplayAPyramid.c \
../Completed/HeightInCMtoFeetAndInches.c \
../Completed/ImprovedBarChart.c \
../Completed/InputAndMultiplyDivide.c \
../Completed/RecursionPrintRangeOfNumbers.c \
../Completed/StockPurchaseDecisionAdvisor.c 

OBJS += \
./Completed/BoilingAndFreezingOfFehKev.o \
./Completed/DisplayAPyramid.o \
./Completed/HeightInCMtoFeetAndInches.o \
./Completed/ImprovedBarChart.o \
./Completed/InputAndMultiplyDivide.o \
./Completed/RecursionPrintRangeOfNumbers.o \
./Completed/StockPurchaseDecisionAdvisor.o 

C_DEPS += \
./Completed/BoilingAndFreezingOfFehKev.d \
./Completed/DisplayAPyramid.d \
./Completed/HeightInCMtoFeetAndInches.d \
./Completed/ImprovedBarChart.d \
./Completed/InputAndMultiplyDivide.d \
./Completed/RecursionPrintRangeOfNumbers.d \
./Completed/StockPurchaseDecisionAdvisor.d 


# Each subdirectory must supply rules for building sources it contributes
Completed/%.o: ../Completed/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


