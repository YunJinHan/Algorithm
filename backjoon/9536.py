import string

def start():
	sen = raw_input()
	sen_list = sen.split(' ')
	word_list = word_input()

	for i in range(0,len(sen_list)):
		for j in range(0,len(word_list)):
			if (sen_list[i]==word_list[j]):
				sen_list[i] = ""
				break

	output(sen_list)

def word_input():
	word_list = []
	while (True):
		word = raw_input()
		if (word=="what does the fox say?"):
			break;
		start = word.rfind(' ')
		word_list.append(word[start+1:])
	return word_list

def output(sen_list):
	ans = ""
	for i in range(0,len(sen_list)):
		if (sen_list[i]!=""):
			ans += sen_list[i] + " "
	print ans

def main():
	k = input()
	while not (k==0):
		k-=1
		start()

main()