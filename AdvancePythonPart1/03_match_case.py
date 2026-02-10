def http_status(status):
    match status:
        case 200:
            return "OK"
        case 400:
            return "Not Found"
        case 500:
            return "Internal Error"
        case _:
            return "Unknown Error"
#Example Usage
print(http_status(200))
print(http_status(400))
print(http_status(500))
print(http_status(404))