Title:Detection of Smokers from Surveillance Videos
status:hidden


<h3>Detection of Smokers from Surveillance Videos</h3>

<p><br><strong>Project Team : </strong>
Ilktan Ar and <a href="http://www.bilmuh.gtu.edu.tr/~akgul/">Dr. Yusuf Sinan Akgul.</a></p>

<p>Classification of human actions in video sequences is a popular topic in computer vision.
Applications such as human computer interaction systems, surveillance systems,
multimedia retrieval, video indexing, virtual reality etc. require a robust detection of
actions in video sequences. This task is very difficult because it deals with illumination
and view point variations, perspective effects, scene variations, occlusions, individual
variations of people due to appearance, clothing, motion, etc. Nowadays there exits many
interest areas in the classification of human actions. Some interest areas are recognition
of dance and ballet choreography, lips reading, and sports.</p>

<p>This study focuses on the problem of smoker detection in surveillance videos. By solving
this problem, we can detect smokers in the non-smoking zones (gas station, important public
places etc.), we can count smokers for statistical operations, etc. Unlike other human actions
like walking, running, bending, pointing etc. smoking is not a primitive action. Smoking is
a complex action that can be combined with walking, talking, drinking etc. We focus to this
problem and develop a system based on consecutive AdaBoost classifiers to detect smokers.
Our system first detects humans on the scene then extracts the body pose direction of these
humans. Next, we classify the walking and standing persons. Finally, we find the smokers
using the available information by boosting.</p>

<p>We believe that detecting smokers in surveillance videos is an important task and there
should be specialized systems for this task. Our work is one of the first examples that
address this problem. As the second novelty of our work, we propose to use successive
boosting classifiers to classify human poses, primitive actions, and smokers. During our
classification routines, we do not need to use any human body (legs, arms, torso etc.)
segmentation. We demonstrated a system based on consecutive AdaBoost classifiers to detect
smokers. We created a database that includes videos of smokers and non-smokers. This
database is used for training and testing our system (An example frame is given in figure-1).
Our system achieved a promising percentage at the recognition accuracy of smoking
action based on sequences.</p>

<div class=P6Fig>
  <p class=P6FigImg><img src="{filename}/files/proj06/fig1.jpg" /></p>
  <p>Fig 1. A sample frame taken from our database. In this figure, we see two actors
  in the scene one of them is smoking (on the left) and the other (on the right) is
  looking at bushes (non-smoking).</p>
</div>
