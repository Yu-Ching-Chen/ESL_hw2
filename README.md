# ESL_hw2
NTHU EE6470 ESL homework 2

## HW2 without quantum keeper.
### To compile and run the program. <br>
In the top most directory.
```bash 
$ cd ./hw2_wo_qk
$ mkdir build
$ cd build
$ cmake ..
$ make
```
#### Testing 1
```bash 
$ time ./filter ../../lena_color_256_noise.bmp ./lena_color_256_out.bmp
```
Open **lena_color_256_out.bmp** to check the image and the read/write times and simulation runtime are shown on the terminal.
<br>

#### Testing 2
```bash 
$ time ./filter ../../peppers_color_noise.bmp ./peppers_color_out.bmp
```
Open **peppers_color_out.bmp** to check the image and the read/write times and simulation runtime are shown on the terminal.
<br>


## HW2 with quantum keeper.
### To compile and run the program. <br>
In the top most directory.
```bash 
$ cd ./hw2_w_qk
$ mkdir build
$ cd build
$ cmake ..
$ make
```
#### Testing 1
```bash 
$ time ./filter ../../lena_color_256_noise.bmp ./lena_color_256_out.bmp
```
Open **lena_color_256_out.bmp** to check the image and the read/write times and simulation runtime are shown on the terminal.
<br>

#### Testing 2
```bash 
$ time ./filter ../../peppers_color_noise.bmp ./peppers_color_out.bmp
```
Open **peppers_color_out.bmp** to check the image and the read/write times and simulation runtime are shown on the terminal.
<br>
