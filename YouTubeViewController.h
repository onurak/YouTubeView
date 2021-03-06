//
//
//  Created by Randy McMillan on 8/2/12.
//  Copyright (c) 2012 Randy McMillan. All rights reserved.
//
//

#import <UIKit/UIKit.h>
#import "GradientButton.h"
#import "GradientToolBar.h"
#import "GradientNavBar.h"

@protocol YouTubeWebViewDelegate <NSObject>
@end

@interface YouTubeViewController : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate>{
	IBOutlet UIWebView *webView;

	IBOutlet GradientToolBar	*toolBar;
	IBOutlet GradientNavBar		*navBar;
	IBOutlet UILabel			*addressLabel;

	IBOutlet UIBarButtonItem	*doneBarButtonItem;
	IBOutlet GradientButton		*doneButton;

	IBOutlet UIBarButtonItem	*refreshBarButtonItem;
	IBOutlet GradientButton		*refreshButton;

	IBOutlet UIBarButtonItem	*backBarButtonItem;
	IBOutlet GradientButton		*backButton;

	IBOutlet UIBarButtonItem	*fwdBarButtonItem;
	IBOutlet GradientButton		*forwardButton;

	IBOutlet UIBarButtonItem	*safariBarButtonItem;
	IBOutlet GradientButton		*safariButton;

	IBOutlet UIActivityIndicatorView	*spinner;
	BOOL								isImage;
	NSString							*imageURL;
	id <YouTubeWebViewDelegate>			delegate;

	BOOL scaleEnabled;

	id <UIGestureRecognizerDelegate>	uigr;
	CGFloat								tx;		// x translation
	CGFloat								ty;		// y translation
	CGFloat								scale;	// zoom scale
	CGFloat								theta;	// rotation angle
}

- (IBAction)onDoneButtonPress:(id)sender;
- (IBAction)onSafariButtonPress:(id)sender;

@property (nonatomic, retain) UIWebView							*webView;
@property (retain) NSString										*imageURL;
@property (assign) BOOL											isImage;
@property (nonatomic, retain) id <YouTubeWebViewDelegate>		delegate;
@property (nonatomic, retain) GradientButton					*doneButton;
@property (nonatomic, retain) id <UIGestureRecognizerDelegate>	uigr;

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
- (YouTubeViewController *)initWithScale:(BOOL)enabled;

@end
