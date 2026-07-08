
<img width="256" height="256" alt="PixelLab Studio-1783497794065" src="https://github.com/user-attachments/assets/e6de77dd-feee-498a-86d8-47ec578717f6" />

The Epsilon operating system is software based on the Xv6 operating system.
Please check the license,
https://github.com/CasTolax/EpsilonOS/blob/main/LICENSE

### INFORMATION FOR USERS

Due to its simple structure and straightforward operations,
this operating system is one of the most suitable systems for educational purposes.
However, it can only be run on QEMU, and my goal is to develop a system that can be
used for writing screen, sound, VGA, and internet drivers—a system that is suitable
for daily use and can be preferred for lightweight systems.
 Since its structure is simple and prone to errors, I will address this over time.

## Regarding memory management

It has already been written in a simple manner, and as I mentioned,
 it was developed for educational purposes. It currently supports up to 4096 MB.
 Additional features will be added based on the system’s specifications.

## ABOUT ANSI SUPPORT

Make sure your terminal supports ANSI... The output is color-coded, 
and error messages will typically appear in red text. If ANSI 
support is not available,the output will be displayed in 
the default color.
