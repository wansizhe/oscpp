void printf(char* str) {
    unsigned short* VideoMemory = (unsigned short*)0xb8000;
    for (int i = 0; str[i]; i++) {
        VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
    }
}

void kernelMain(void* multiboot_structure, unsigned int magicnumber) {
    printf("Hello world!");
    while (1);
}