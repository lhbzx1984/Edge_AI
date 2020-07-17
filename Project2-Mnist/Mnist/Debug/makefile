################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32H7xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Mnist.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Mnist.list \

OBJCOPY_BIN += \
Mnist.bin \


# All Target
all: Mnist.elf secondary-outputs

# Tool invocations
Mnist.elf: $(OBJS) $(USER_OBJS) /home/lebhoryi/RT-Thread/Edge_AI/Project2-Mnist/Mnist/STM32H743ZITX_FLASH.ld
	arm-none-eabi-gcc -o "Mnist.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"/home/lebhoryi/RT-Thread/Edge_AI/Project2-Mnist/Mnist/STM32H743ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Mnist.map" -Wl,--gc-sections -static -L../Middlewares/ST/AI/Lib -u _printf_float --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Mnist.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Mnist.list"
	@echo 'Finished building: $@'
	@echo ' '

Mnist.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Mnist.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
