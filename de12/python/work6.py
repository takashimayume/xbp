print("おすすめ講義")
name=input("あなたの名前は何ですか？")
ichimon=input("毎回リアぺ提出があった方がいいですか？")
nimon=input("期末レポートか期末テストならレポートのほうがいいですか？")

if (ichimon=="はい") :
    import random
    items=("人文地理学","コンピュータ概論","文化人類学")

    print (name,"さんにおすすめの講義は、",random.choice(items))

else:
    import random
    items=("生物学","考古学")
    print(name,"さんにおすすめの講義は、",random.choice(items))


if (nimon=="はい") :
    import random
    items=("社会学","異文化間コミュニケーション")

    print (name,"さんにおすすめの講義は、",random.choice(items))

else:
    import random
    items=("基礎生物学","日本語学")
    print(name,"さんにおすすめの講義は、",random.choice(items))





