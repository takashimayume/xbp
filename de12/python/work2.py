name="aaa"
waist=80
age=28

print(name, "さんは腹囲", waist, "cmで年齢は",age, "才ですね。")

if waist>=60 or age>40:
    print(name,"さん、内臓脂肪蓄積注意です")
else:
    print(name,"さん、腹囲は問題ありません")
