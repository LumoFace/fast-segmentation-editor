# Fast Segmentation Editor

This project is a handy and quick user-interface application for ground-truth refining of semantic segmentation datasets using Python/OpenCV. The original dataset utilized with the code can be downloaded from this link: https://dataverse.scholarsportal.info/dataset.xhtml?persistentId=doi:10.5683/SP/NTUOK9

![sample](images/sample.png)

### Dependencies

+ `python 3.4`
+ `pyqt 4.x`
+ `opencv 3.x`
+ `numpy 1.11.x`
+ `colorama 0.3`
+ `natsort=5.0.x`
+ `scikit-image 0.12.x`

If Anaconda environment is your preference, do consider using the given `environment.yml` file with `conda env create -f environment.yml`. This will result in the formation of a virtual environment named `tnc-py34`.

### How to Use

```bash
source activate tnc-py34
python truth_and_crop.py
```

The various button functionalities include:
+ __Input File__ - Browse to load an image file.
+ __Output Path__ - Browse to the root folder where output should be saved. It automatically creates three subfolders.
+ __Previous/Next Image__ - If more images are found in the same folder as the Input File, one can jump between images with these buttons.
+ __Refresh__ - Discards changes.
+ __Crop__ - Toggles between annotation mode and cropping mode.
+ __Toggle__ - Toggles annotations on and off to enhance raw image visibility. SLIC is only executed for the first toggle, subsequent toggles are relatively faster.
+ __Save__ - To write all cropped images and masks into appropriate subfolders under the path specified by 'Output Path'.
