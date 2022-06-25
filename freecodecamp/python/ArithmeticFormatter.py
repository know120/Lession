def arithmetic_arranger(problems, show=False):
    arranged_problems = ''
    top = list()
    top_str = '    '

    bottom = list()
    bottom_str = '    '

    results = list()
    results_str = '    '

    dashes = list()
    dashes_str = '    '

    if len(problems) > 5:
        return 'Error: Too many problems.'

    for problem in problems:
        equation = problem.split()
        first = equation[0]
        second = equation[2]
        operator = equation[1]

        # checking number contains more than 4 digit or not
        if(len(first) > 4 or len(second) > 4):
            return 'Error: Numbers cannot be more than four digits.'
        # checking number contains only digit
        if (not first.isnumeric()) or (not second.isnumeric()):
            return 'Error: Numbers must only contain digits.'
        # checking operator are valid or not
        if operator == '+':
            result = int(first) + int(second)
        elif operator == '-':
            result = int(first) - int(second)
        else:
            return "Error: Operator must be '+' or '-'."

        # calculate number of dashes
        dashlen = max(len(first), len(second)) + 2

        top.append(first.rjust(dashlen))
        bottom.append(operator.rjust(1)+second.rjust(dashlen - 1))
        dashes.append('-' * dashlen)
        results.append(str(result).rjust(dashlen))

    top_str = top_str.join(top)
    # print(top_str)
    bottom_str = bottom_str.join(bottom)
    # print(bottom_str)
    dashes_str = dashes_str.join(dashes)
    # print(dashes_str)
    results_str = results_str.join(results)
    # print(results_str)
    if(show):
        arranged_problems = top_str + "\n" + bottom_str + \
            "\n" + dashes_str + "\n" + results_str
    else:
        arranged_problems = top_str + "\n" + bottom_str + "\n" + dashes_str

    return arranged_problems


inp = ['3801 - 2', '123 + 49']
print(arithmetic_arranger(inp, True))
