name=input("名前を教えて下さい")
waist=input("腹囲は？")
age=input("年齢は？")

if waist>=60 or age>40:
    print(name,"さん、内臓脂肪蓄積注意です")
else:
    print(name,"さん、腹囲は問題ありません")