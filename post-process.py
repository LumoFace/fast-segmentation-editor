
import argparse
import numpy as np
import matplotlib.pyplot as plt

from scipy import ndimage

X_LOW = 80
X_UPP = 120

Y_LOW = X_LOW
Y_UPP = X_UPP

MAX_VALID_CLASS = 5


if __name__ == '__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('mask', help='path to integer mask to clean')
    parser.add_argument(
        '--zoom', help="zoom into area bounded by X_LOW, X_UPP, Y_LOW, Y_UPP", action="store_true")
    args = parser.parse_args()

    orig_mask = plt.imread(args.mask)
    max_px = orig_mask.max()