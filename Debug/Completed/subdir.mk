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
../Completed/PlusPlusAPointerInt.c \
../Completed/PrintFirst5Primes.c \
../Completed/PrintPassedInArray.c \
../Completed/RecursionPrintRangeOfNumbers.c \
../Completed/SortArrayOfStructures.c \
../Completed/SortInputString.c \
../Completed/StaticVariablePractice.c \
../Completed/StockPurchaseDecisionAdvisor.c \
../Completed/StructPractice.c \
../Completed/TernaryOperator.c 

OBJS += \
./Completed/BoilingAndFreezingOfFehKev.o \
./Completed/ConvertCompassBearingToDirection.o \
./Completed/DisplayAPyramid.o \
./Completed/HeightInCMtoFeetAndInches.o \
./Completed/ImprovedBarChart.o \
./Completed/InputAndMultiplyDivide.o \
./Completed/InputIntOutputFloatTypeCast.o \
./Completed/PlusPlusAPointerInt.o \
./Completed/PrintFirst5Primes.o \
./Completed/PrintPassedInArray.o \
./Completed/RecursionPrintRangeOfNumbers.o \
./Completed/SortArrayOfStructures.o \
./Completed/SortInputString.o \
./Completed/StaticVariablePractice.o \
./Completed/StockPurchaseDecisionAdvisor.o \
./Completed/StructPractice.o \
./Completed/TernaryOperator.o 

C_DEPS += \
./Completed/BoilingAndFreezingOfFehKev.d \
./Completed/ConvertCompassBearingToDirection.d \
./Completed/DisplayAPyramid.d \
./Completed/HeightInCMtoFeetAndInches.d \
./Completed/ImprovedBarChart.d \
./Completed/InputAndMultiplyDivide.d \
./Completed/InputIntOutputFloatTypeCast.d \
./Completed/PlusPlusAPointerInt.d \
./Completed/PrintFirst5Primes.d \
./Completed/PrintPassedInArray.d \
./Completed/RecursionPrintRangeOfNumbers.d \
./Completed/SortArrayOfStructures.d \
./Completed/SortInputString.d \
./Completed/StaticVariablePractice.d \
./Completed/StockPurchaseDecisionAdvisor.d \
./Completed/StructPractice.d \
./Completed/TernaryOperator.d 


# Each subdirectory must supply rules for building sources it contributes
Completed/%.o: ../Completed/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


