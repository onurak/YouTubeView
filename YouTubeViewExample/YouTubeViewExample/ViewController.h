//
//  ViewController.h
//  YouTubeViewExample
//
//  Created by Randy McMillan on 11/21/12.
//  Copyright (c) 2012 RandyMcMillan.net. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YouTubeViewController;
@interface ViewController : UIViewController {}
@property (nonatomic, retain) IBOutlet UIButton *youtubeButton;
@property (nonatomic, retain) NSString			*youtubeToDisplay;

- (IBAction)displayYouTube:(id)sender;
@end
