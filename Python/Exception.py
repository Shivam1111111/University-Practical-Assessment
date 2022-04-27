import sys
# assert ('linux' in sys.platform), "This code runs on Linux only."
# x = 10
# if x > 5:
#     raise Exception('x should not exceed 5. The value of x was: {}'.format(x))
    
def linux_interaction():
    assert ('linux' in sys.platform), "Function can only run on Linux systems."
    print('Doing something.')

#     linux_interaction()
# except:
#     print('Linux function was not executed')

try:
    linux_interaction()
except AssertionError as error:
    print(error)
    print('The linux_interaction() function was not executed')

# try:
#     with open('file.log') as file:
#         read_data = file.read()
# except:
#     print('Could not open file.log')
# try:
#     with open('file.log') as file:
#         read_data = file.read()
# except FileNotFoundError as fnf_error:
#     print(fnf_error)
# try:
#     linux_interaction()
# except AssertionError as error:
#     print(error)
# else:
#     print('Executing the else clause.')

# try:
#     linux_interaction()
# except AssertionError as error:
#     print(error)
# else:
#     try:
#         with open('file.log') as file:
#             read_data = file.read()
#     except FileNotFoundError as fnf_error:
#         print(fnf_error)
#     finally:
#         print('Cleaning up, irrespective of any exceptions.')