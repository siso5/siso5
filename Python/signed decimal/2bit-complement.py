print("16進数 'data1''data2' を入力してください : ")

data1 = input("date1 : ")
data2 = input("date2 : ")

print("16進数'", data1 ,"''", data2,"'が入力されました。")

data1 = int(data1, base=16)

def test_date2(data1, data2):
 if data1 >= 8:
    data1 = int(data1,base=2)-int('1000',base=2)
    data1 = bin(data1 << 1)
    data1  = int(data1, base=2)
    test_date2(data1, data2)

data2 = int(data2, 16)

val =  data1* 256 + data2

if val > 2047:
   val =  val - 4096

print( "入力された16進数を10進数に変換すると", val, "です。")
