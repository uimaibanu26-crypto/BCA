raw_data = """              naveen KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""


lines = raw_data.strip().split("\n")

name = lines[0].title()
initials = name[0] + name[7]
email = lines[1].lower()
domain = email.split("@")[1]
phone = "*" *  9+ lines[2][11:]
valid = "@" in email and "." in email and '.'in domain

print("Name    :", name)
print("Initials:", initials)
print("Email   :", email)
print("Domain  :", domain)
print("Phone   :", phone)
print("Valid   :", valid)