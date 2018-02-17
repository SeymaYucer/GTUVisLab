Title: 3D Human Action Recognition
status:hidden
<h3>
  Metric Learning Based Action Recognition From Three Dimensional Skeleton Data</h3>
<h5>
   Project Team: Şeyma Yücer, Prof.Dr. Yusuf Sinan Akgül
</h5>
<br/><p>Human action recognition, one of the crucial problems of the computer vision, is analyzing human actions via computers. Action recognition affects many research areas such as physiotherapy, surveillance, multimedia, biometrics and so on. Related works mainly focus on the patients' actions analysis, person recognition, surveillance for suspicious movements detection and daily activities (such as eating, drinking,sitting, etc.) and sports actions (such as running, diving, cycling, etc.) recognition.
Human action data is acquired from 2D and 3D images. In addition to 2D images, 3D images contain the depth information for each pixel. Skeleton joint coordinates on 3D images provides a more efficient and more reliable way to represent human actions.
</p>
<p>In this work, we present two different methods for analyzing human actions on 3D skeleton images. The first method is a representation-based solution for human action recognition problem. This method, called the geometric bag of joints based human action recognition, utilizes the spatial-temporal behavior of 3D skeleton frames and uses SoftMax regression method to classify human actions. The other method is a deep neural network-based method. For this method, we designed a Siamese LSTM-DML network which learns the relationship between actions and recognizes human actions using this relationship information. For each action, sub-LSTM networks extract the temporal features of human actions. Using these features, the network is trained with two-way parameter sharing and learns the deep metrics of actions. Therefore, the end-to-end trainable network can classify human actions. Unlike the other method, this method is more generalizable and can learn the relationship between human actions.
As a part of this study, we created a GTU Action 3D dataset that contains daily indoor activities and indoor sports actions. Our methods are tested against Florence Action 3D, MSR Action3D, NTU RGB+D datasets as well as our own dataset. Also, we compared our methods to related works.
</p>
<p>
Our DML network employs a Siamese-LSTM (S-LSTM) structure, which repeats the same network two times in parallel with the shared parameters. Each one of our networks employ the same LSTM architecture which is very popular for the 3D human action recognition tasks because LSTMs can learn temporal sequence information very efficiently.
Our proposed classification system employs two successive modules. The first module, Siamese-LSTM is for the similarity metric calculation between action pairs. The second module, multi-class classification (MCC) is for the real action classification. Our DML approach is not restricted by the initial action classes in the training set because we are not using classification for the fixed number of classes in S- LSTM module. Instead, this module learns similarities between action sequences. Therefore, our S-LSTM module can be trained with many action pairs from different datasets, which makes our method more generalizable because learning the similarity across many different datasets is supposed to perform better than learning this information from a single set. As expected, S-LSTM module of our system has considerable impact on the recognition accuracy. This makes our proposed system more generalizable and modular.
</p>

<h6>
   1- SiameseLSTM-based DML Module
</h6>

<p>  
  For the 3D human action recognition task, the final goal is to find the action class given 3D skeleton frame sequences as accurately as possible. However, we claim that learning a similarity metric between the action sequences offers many advantages. Therefore, we propose an S-LSTM network to take 3D action pairs as inputs and learn a similarity metric between them.
</p>
<p>
  Fig. 1 shows the general structure of the proposed metric learning module. This module takes two 3D action sequences Sp = {s1p,s2p,s3p,... sTp } and Sq = {s1q,s2q,s3q,... sRq }, which are ordered. T and R are the number of frames for each sequence. stp= { jt1, jt2 ,... jtN }p is a single skeleton frame where N is the total number of 3D joints in a single frame at time t. jtn= {xn, yn, zn}∈ R3 is the coordinate for single joint jtn. Note that T and R are different for each action sequences. Therefore, we use LSTM cells as the basic building block of our metric learning system. Each of the two LSTM networks takes one sequence as input and they produce two output vectors Op∈ RM and Oq∈ RM. Note that sizes of these vectors are fixed regardless of the number of frames (T and R) in the input sequences.
</p>
<center>
  <img class="img-responsive" src="{filename}/files/proj015/system-arch-v2.svg"/>
  <p>
    <strong>
      Figure 1:
    </strong>
    Overview of SiameseLSTM-based DML Module
  </p>
</center>
<p>
  We model the block of LSTM modules with a function L (Sp, Sq)∈ R2M that returns a vector which is concatenations of the vectors Op and Oq. L (S , Sq) holds extracted deep similarity features of the input sequences. We feed this vector to a Multi-Layer Perceptron (MLP) to produce one hot vector V∈ R2 that assigns on of the (match, not match) labels.
</br>
  D(L(Sp ,Sq ))=Vpq , (1) 
</p>
<p>where D is the model for the MLP, which in our case has two hidden layers. 
</p>
<p>Vpq = Softmax(b3+W3ReLU( b2+W2ReLU(b1+W1L(Sp,Sq))), (2) 
</p>
<p>where W’s are the network weighs, b’s are the bias terms, ReLU is the rectified linear activation unit. The effectiveness of the module D is important as it highly influences the accuracy of the multiclass classification module. This will be explained in the next section.
</p>
<h6>
   2- Multi-classClassification Module
</h6>

<p>  
  As described before, the final output of the 3D action recognition systems should be an action class label. The output vector of S-LSTM model is a 2-dimensional match-no match vector, which is not sufficient for this label assignment.

</p>
<p>
  The task of the MCC module in Fig. 2 is to get results of comparison between a test action sequence Sp and many other train sequences Sq1 , Sq2 , Sq3 ,... Sqk where k is the
number of such training sequences. Let G∈R2k be the concatenation of the vectors from the S-LSTM model results Vpq1, Vpq2, Vpq3,... Vpqk. The vector G is fed to the MCC as
input and the output of this module is a one hot vector of C∈ Ru, where u is the number of action classes to be recognized. We tested different methods for the MCC such as KNN and SVM.
Note that although the previous module S-LSTM needs to be trained with action pairs as input and the match-no match labels as output, our MCC module needs to be trained with the final action class labels. Therefore, S-LSTM can be trained with action sequence pairs from different datasets but MCC module needs to be trained on a single dataset with its own action class labels.
</p>
<center>
  <img class="img-responsive" src="{filename}/files/proj015/siam-lstm-mlp-v2.svg"/>
  <p>
    <strong>
      Figure 2:
    </strong>
    Overview of Multi-classClassification Module
  </p>
</center>
<h6>
   3- Module Training
</h6>

<p>  
  Training of S-LSTM and MCC is done separately. For the training of S-LSTM, there is a label imbalance problem because the number possible no match pairs is much larger than the matching pairs. To keep the training set of the SLSTM in balance, for a dataset of U action classes, we keep the ratio of match/no match pairs around 1/U. Our MCC module does not have any label imbalance problem because we expect that the number action labels to be relatively uniforms across the action classes. Note however that the number training samples for the MCC module is much less than the number of training samples for the S-LSTM, which is one of the main contributions of our method.
</p>


<br/>
<center>
  <img class="img-responsive" src="{filename}/files/proj015/siam-lstm-mlp_end2end.png"/>
  <p>
    <strong>
      Figure 3:
    </strong>
    Overview of our final End-to-end system
  </p>
</center>

<strong>
    Publications
</strong>
<ul>
  <li>
    <a href="{filename}/pdfs/2017/siamese_lstm_dml.pdf">
      Seyma Yucer and Yusuf Sinan Akgul "3D Human Action Recognition with Siamese-LSTM Based Deep Metric Learning", Journal of Images and Graphics, May 2018.
    </a>
  </li>
</ul>


  
