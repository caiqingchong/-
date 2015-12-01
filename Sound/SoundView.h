//
//  SoundView.h
//  Sound
//
//  Created by jiayi on 13-4-10.
//  Copyright (c) 2013年 jiayi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface SoundView : UIViewController<AVAudioPlayerDelegate,AVAudioSessionDelegate>
{
    UIButton *playButton;
    AVAudioSession *session;
    NSURL *recordedFile;
    AVAudioPlayer *player;
    AVAudioRecorder *recorder;
}
@property (nonatomic , retain) AVAudioPlayer *player;
@property (nonatomic , retain) NSURL *recordedFile;
@end
