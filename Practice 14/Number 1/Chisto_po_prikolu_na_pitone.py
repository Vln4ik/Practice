class DivisionException(Exception):
    pass


class MyClass:
    def divide(self, a, b):
        try:
            result = a / b
            return result
        except ZeroDivisionError:
            raise DivisionException("Division by zero is not allowed.")


def main():
    try:
        obj = MyClass()
        result = obj.divide(10, 0)
        print("Result:", result)
    except DivisionException as e:
        print("Caught DivisionException:", str(e))
    except Exception as e:
        print("Caught Exception:", str(e))


if __name__ == "__main__":
    main()
