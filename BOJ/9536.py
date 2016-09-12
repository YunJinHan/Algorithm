import string

k = input()
while not (k==0):
	k-=1
	word_list = []
	sen = raw_input()

	while (True):
		word = raw_input()
		if (word=="what does the fox say?"):
			break;
		start = word.rfind(' ')
		word_list.append(word[start+1:])

	sen_list = sen.split(' ')

	for i in range(0,len(sen_list)):
		for j in range(0,len(word_list)):
			if (sen_list[i]==word_list[j]):
				sen_list[i] = ""
				break

	ans = ""
	for i in range(0,len(sen_list)):
		if (sen_list[i]!=""):
			ans += sen_list[i] + " "

	print ans

