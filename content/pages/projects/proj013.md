Title:Automatic Measurement of the Prostate Size from Abdominal Ultrasound Images  
status:hidden

### Automatic Measurement of the Prostate Size from Abdominal Ultrasound Images  

TUBITAK Project No: 114E536  

Project Team: Dr. Yusuf Sinan Akgül, Dr. Rahmi Çubuk, Dr. Orhun Sinanoğlu, Dr. Ayşe Betül Oktay, Nur Banu Albayrak, Kübra Murzoğlu Altıntoprak, Ayşe Şerbetçi  

Prostate cancer is one of the most frequently seen diseases both in Turkey and in the World. This rate is even higher for the industrialized nations. As a result, medical image analysis research towards prostate cancer screening, diagnosis and treatment has been very popular among the computer vision and image processing community.

Ultrasound (US) is one of the most preferred methods for producing prostate images due to its low cost, portability, ease of use, and real time applicability. There are two types of US methods for the prostate images. Transrectal Ultrasound (TRUS) provides better images for prostate size measurement but the procedure for obtaining TRUS images is very discomforting for the patients. The second type is the Abdominal Ultrasound (AUS) technique which is much more practical for the patients and the US operators.

However, compared to TRUS images, AUS images are noisier, provide smaller prostate regions, and most importantly include many other structures other than the prostate in the images. Therefore, there are only a few limited image analysis methods in the literature that work on prostate measurement from AUS images. To the best of our knowledge, the only known work for AUS prostate segmentation requires expert initialization and it was not verified with an extensive image set. As a result, it is known that an automated AUS prostate detection and segmentation method is needed for practical use.

<center>![image]({filename}/files/proj013/P1.png)</center>

This project proposes to use AUS images to automatically locate the prostate region and then measure the prostate size. The obtained measurement results will be analyzed using scientific techniques to investigate the applicability of the proposed method for the practical clinical work.

Classical object localization and segmentation methods would not produce acceptable results for the AUS images due to the AUS related problems like noise and artifacts. Hence, original localization and segmentation methods need to be developed. The main idea of the proposed system is to use the unrelated structures in the AUS images to help locate the prostate. In other words, in order to better locate the prostate, other structures such as the bladder and abdominal layers will be located at the same time with the prostate using a general optimization framework. To this end, we will apply Deformable Part Models (DPM) that enforce both image level and relative part level constraints of the general model. Similar original techniques will be developed for the segmentation of the ultrasound images. The sub detectors of the DPM method will use machine learning based detectors that will use feature vectors estimated by classical methods such as Histogram of Oriented Gradients (HOG) as well as more recent unsupervised methods such as deep learning based features.

<center>![image]({filename}/files/proj013/P2.png)</center>

One of the major contributions of the proposed project is the verification and investigation of the practical applicability of the final system. For this purpose, AUS and MRI images from the same patients will be collected. Both images will be manually analyzed by the area experts for prostate measurements. The MRI images will also be analyzed using commercial software to obtain a ground truth data set. The final results from the proposed system will be compared with this ground truth and expert marked results.

**Publications**

*   [Nur Banu Albayrak, Ayşe Betül Oktay and Yusuf Sinan Akgül,"Prostate Detection From Abdominal Ultrasound Images: A Part Based Approach" , IEEE International Conference of Image Processing, ICIP 2015. ]({filename}/pdfs/2015/ICIP2015.pdf)