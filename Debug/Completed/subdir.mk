################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Completed/BoilingAndFreezingOfFehKev.c \
../Completed/ConvertCompassBearingToDirection.c \
../Completed/DisplayAPyramid.c \
../Completed/HeightInCMtoFeetAndInches.c \
../Completed/ImprovedBarChart.c \
../Completed/InputAndMultiplyDivide.c \
../Completed/InputIntOutputFloatTypeCast.c \
../Completed/PrintPassedInArray.c \
../Completed/RecursionPrintRangeOfNumbers.c \
../Completed/StaticVariablePractice.c \
../Completed/StockPurchaseDecisionAdvisor.c \
../Completed/TernaryOperator.c 

OBJS += \
./Completed/BoilingAndFreezingOfFehKev.o \
./Completed/ConvertCompassBearingToDirection.o \
./Completed/DisplayAPyramid.o \
./Completed/HeightInCMtoFeetAndInches.o \
./Completed/ImprovedBarChart.o \
./Completed/InputAndMultiplyDivide.o \
./Completed/InputIntOutputFloatTypeCast.o \
./Completed/PrintPassedInArray.o \
./Completed/RecursionPrintRangeOfNumbers.o \
./Completed/StaticVariablePractice.o \
./Completed/StockPurchaseDecisionAdvisor.o \
./Completed/TernaryOperator.o 

C_DEPS += \
./Completed/BoilingAndFreezingOfFehKev.d \
./Completed/ConvertCompassBearingToDirection.d \
./Completed/DisplayAPyramid.d \
./Completed/HeightInCMtoFeetAndInches.d \
./Completed/ImprovedBarChart.d \
./Completed/InputAndMultiplyDivide.d \
./Completed/InputIntOutputFloatTypeCast.d \
./Completed/PrintPassedInArray.d \
./Completed/RecursionPrintRangeOfNumbers.d \
./Completed/StaticVariablePractice.d \
./Completed/StockPurchaseDecisionAdvisor.d \
./Completed/TernaryOperator.d 


# Each subdirectory must supply rules for building sources it contributes
Completed/%.o: ../Completed/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


