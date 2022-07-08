import numpy as np


def calculate(list):

    # Check if list is of length 9
    if len(list) != 9:
        raise ValueError("List must contain nine numbers.")

    # Convert list to numpy array
    array = np.array(list)
    array = array.reshape(3, 3)

    # matrix axis types
    matrix_type = [0, 1, None]
    # list of operations
    operation_names = ['mean', 'variance',
                       'standard deviation', 'max', 'min', 'sum']
    operations = [np.mean, np.var, np.std, np.max, np.min, np.sum]

    # list of operation results
    calculations = {
        operation_name : [
            operation(array, axis=i).tolist() for i in matrix_type
        ] for operation_name, operation in zip(operation_names, operations)
    }

    # # result dictionary
    # calculations = {}
    # # for each operation doing calculations
    # for operation, result in zip(operations, operation_names):
    #     calculations[result] = [operation(array, axis=i).tolist() for i in matrix_type]

    # return calculations dictionary
    return calculations
