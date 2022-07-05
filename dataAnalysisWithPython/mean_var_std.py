import numpy as np


def calculate(list):

    # Check if list is of length 9
    if len(list) != 9:
        raise ValueError("List must contain nine numbers.")

    # Convert list to numpy array
    array = np.array(list)
    array = array.reshape(3, 3)

    # calculate mean
    axis1 = np.mean(array, axis=0).tolist()
    axis2 = np.mean(array, axis=1).tolist()
    flatten = np.mean(array, axis=None).tolist()
    mean = [axis1, axis2, flatten]

    # calculate variance,
    axis1 = np.var(array, axis=0).tolist()
    axis2 = np.var(array, axis=1).tolist()
    flatten = np.var(array, axis=None)
    variance = [axis1, axis2, flatten]

    # calculate standard deviation,
    axis1 = np.std(array, axis=0).tolist()
    axis2 = np.std(array, axis=1).tolist()
    flatten = np.std(array, axis=None)
    standard_deviation = [axis1, axis2, flatten]

    # calculate max, min
    axis1 = np.max(array, axis=0).tolist()
    axis2 = np.max(array, axis=1).tolist()
    flatten = np.max(array, axis=None)
    max = [axis1, axis2, flatten]

    axis1 = np.min(array, axis=0).tolist()
    axis2 = np.min(array, axis=1).tolist()
    flatten = np.min(array, axis=None)
    min = [axis1, axis2, flatten]

    # calculate sum of the rows, columns, and elements
    axis1 = np.sum(array, axis=0).tolist()
    axis2 = np.sum(array, axis=1).tolist()
    flatten = np.sum(array, axis=None)
    sum = [axis1, axis2, flatten]

    # make a dictionary with the calculated values
    calculations = {'mean': mean, 'variance': variance, 'standard deviation': standard_deviation,
                    'max': max, 'min': min, 'sum': sum}
    
    # return dictionary
    return calculations
