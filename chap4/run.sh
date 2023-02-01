riscv64-linux-gnu-gcc -O1 \
-fno-ipa-pure-const  \
-fno-inline-functions-called-once \
-fno-stack-protector \
-Wall -Werror -march=rv64g $1.c -o build/$1
riscv64-linux-gnu-objdump -d build/$1 > build/$1.txt

riscv64-linux-gnu-gcc -O1 \
-fno-ipa-pure-const  \
-fno-inline-functions-called-once \
-fno-stack-protector \
-Wall -Werror -march=rv64g $1.c -S -o build/$1.s