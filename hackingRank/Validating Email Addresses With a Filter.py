def fun(s):
    lis=[]
    if '@' in s and '.' in s and s.index('@')<s.index('.'):
        username=s[:s.index('@')]
        websitename=s[s.index('@')+1:s.index('.')]
        extension=s[s.index('.')+1:]
        
        if (username.isalnum() or '_' in username or '-' in username) and websitename.isalnum() and len(extension)<=3:
            lis.append(s)
            
        return lis

def filter_mail(emails):
    return filter(fun, emails)

if __name__ == '__main__':
    n = int(raw_input())
    emails = []
    for _ in range(n):
        emails.append(raw_input())

    filtered_emails = filter_mail(emails)
    filtered_emails.sort()
    print filtered_emails