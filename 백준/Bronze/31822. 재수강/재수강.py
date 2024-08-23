def is_valid_course_code(code):
    if len(code) != 10:
        return False
    if not code[6].isalnum():
        return False
    if code[7] != '-':
        return False
    if not (code[:6] + code[8:]).isdigit():
        return False
    return True

def can_retake(original, new):
    return original[:5] == new[:5]

original_course = input().strip()

N = int(input().strip())
retake_count = 0
for _ in range(N):
    course = input().strip()
    if is_valid_course_code(course) and can_retake(original_course, course):
        retake_count += 1

print(retake_count)