### How to use commads in EpsilonOS? (xv6-riscv)

 peek,   use: peek <file name>   -- Shows what is contained in files or documents.
 echo,   use: echo Hello world  -- Print console.
 rm,     use: rm <file name>    -- Remove file or anything.
 mkdir,  use: mkdir <file name> -- Creates a file.
 list,     use: list                -- list of files

 link,     use: link <file name> <file name> -- links files example, a to b are the same. when cat a or b, the output
 same with both files.

 grep,   use: grep pattern [file ...] -- examle, we have a file 'apple.txt'. And when user use grep just like this:
 'grep banana apple.txt' the output like this 'apple,banana'. And search words.

 find,   use: find <file name> -- searches the file tree
 wc,     use: wc <file name>   -- word and line counter
 uptime, -- system startup time
 usage,  -- CPU usage 

 
### System commands.

We have a kernel mode and user mode test.

## Stress and Tests,System

 forktest: create process limits
 stressfs: disk + file system stress test
 logstress: log stress test
 usertests: The important test, fork/exec/wait/pipe/file system/memory/crash recovery tests

 grind: random chaos, thats mean: random fork,random exec and karma pipe+file process tests
 zombie: The process state test
 forphan/dorphan: orphan process test
 kill, usage: kill <process name> -- kill the process and finish the process.

### The user commands

 calc, -- calculator.
 rand, -- print random number
 test, -- bool and other tests

 coloring_test, -- Test the coloring screen and words,lines...
 pi,       -- give a pi number
 userdata, -- Input the username and user password(Need for system,kernel,files
 and command controls give you.)

### And Others...

    sh,   -- Start shell 
    init, --  Starting Userland features. Init -> sh -> userland commands.
  
  

By CasTolax 2026.
