Title: Segmentation of Anatomical Structures with Priors
status:hidden

<h3>
    Segmentation of Anatomical Structures with Priors
</h3>
<p>
    <br/>
    <strong>
        Project Team :
    </strong>
    <a href="http://www.bilmuh.gtu.edu.tr/~oktay/">
        Ayse Betul Oktay
    </a>
     and
    <a href="http://www.bilmuh.gtu.edu.tr/~akgul/">
        Dr. Yusuf Sinan Akgul.
    </a>
</p>
<p>
    In this project, we present a novel method that incorporates image and shape prior into deformable contour methods. Although the snakes and level sets are powerful segmentation techniques, they cannot recover the structures in medical images accurately in most of the cases without prior knowledge. The active contour and level set methods deal with local image properties. However, global/prior information must also be taken into account especially in medical imaging applications via priors where the images are noisy and there are unseen/unrelated parts around the organ boundaries.
</p>
<p>
    We propose a flexible and efficient shape prior incorporation method that can be used with either snakes or level sets. Instead of changing the energy formulation and creating the shape prior by training, we proposed to re-initialize the 3D surface/contour from the previously detected expert contours. We propose to employ the image information besides the geometric information while re-initializing the contour. The method does not modify the snake/level set formulation by adding a new prior term. During re-initialization, the expert contour that has most similar geometric and image properties with evolving contour is selected implicitly and the contour/surface is re-initialized regularly under the influence of prior information.
</p>
<p>
    The proposed method has many advantages. Actually, it is difficult to model and formulate the complex shapes for adding them in the level set functional. Our method follows a different approach and incorporates complex shape and image knowledge gathered from experts easily during re-initialization. Moreover, training is not required since the prior information is incorporated directly during the evolution process. It can be applied to various medical imaging types and even complex organ boundaries with small modifications. Also, the method does not significantly increase the computational power requirements.
</p>
<p>
    The method is tested on various medical images including echocardiograms (Figure 1-a) and cardiac MRIs (Figure 1-b) to detect inner and outer heart walls (endocardium and epicardium).
</p>
<center>
    <img src="{filename}/files/proj04/echo.jpg"/>
    <img src="{filename}/files/proj04/cardiac.jpg"/>
    <p>
        a b
    </p>
    <p>
        <strong>
            Fig.1
        </strong>
         (a) Example parasternal short axis view echocardiographic image which endocardium and epicardium marked by an expert. (b) Example cardiac MR image which endocardium and epicardium marked by an expert.
    </p>
</center>
<p>
    The automatically detected contours by our system are shown in Figure 2.
</p>
<center>
    <img src="{filename}/files/proj04/6290.jpg"/>
    <img src="{filename}/files/proj04/3,27.jpg"/>
    <p>
        a b
    </p>
    <p>
        <strong>
            Fig.2
        </strong>
         (a) The contour extracted automatically by our system. (b) The red contour is automatically detected contour and the blue contours are the expert detected contours.
    </p>
</center>
<p>
    We are currently working on incorporating local information into deformable contours via boosting. For detailed information please see our publications.
</p>
<p>
    <strong>
        Publications
    </strong>
</p>
<ul>
    <li>
        <a href="{filename}/pdfs/2010/oktay10_contour.pdf">
            Ayse Betul Oktay and Yusuf Sinan Akgul, "A Modular Framework for Shape and Image PriorBased Anatomical Structure Contour Extraction", Journal of Medical and Biological Engineering, (accepted), 2010.
        </a>
    </li>
    <li>
        <a href="{filename}/pdfs/2011/finalMiccai.pdf">
            Ayse Betul Oktay and Yusuf Sinan Akgul, "Localization of the Lumbar Discs using Machine Learning and Exact Probabilistic Inference", MICCAI, June 2011.
        </a>
    </li>
    <li>
        <a href="{filename}/pdfs/2010/oktay10_kalp.pdf">
             Ayse Betul Oktay ve Yusuf Sinan Akgul, "Kalp Duvarlarının Adaboost ve D&uuml;zey K&uuml;mesi ile Bulunması", IEEE 18. Sinyal İşleme ve İletişim Uygulamaları Kurultayı, Diyarbakır, Nisan 2010.
        </a>
    </li>
    <li>
        <a href="{filename}/pdfs/2009/oktay09_echocard.pdf">
        Ayse Betul Oktay and Yusuf Sinan Akgul. "Echocardiographic Contour Extraction with Local and Global Priors through Boosting and Level Sets", Mathematical Methods in Biomedical Image Analysis (MMBIA), 2009.
        </a>
    </li>
    <li>
        <a href="{filename}/pdfs/2008/oktay08_3Dlevelset.pdf">
        Ayse Betul Oktay and Yusuf Sinan Akgul. "Prior Information Based Segmentation: A 3D Level Set Surface Matching Approach", International Symposium on Computer and Information Sciences, 2008.
        </a>
    </li>
    <li>
        <a href="{filename}/pdfs/2008/oktay08_levelset.pdf">
        Ayse Betul Oktay and Yusuf Sinan Akgul. "A Novel Level Set Based Echocardiographic Contour Extraction Method with Prior Knowledge", British Machine Vision Conference, 2008.
        </a>
    </li>
</ul>