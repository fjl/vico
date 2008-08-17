//
//  ViEditController.h
//  vizard
//
//  Created by Martin Hedenfalk on 2008-03-21.
//  Copyright 2008 Martin Hedenfalk. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ViTextView.h"

@interface ViEditController : NSObject
{
	IBOutlet NSView *view;
	IBOutlet ViTextView *textView;
	IBOutlet NSTextField *statusbar;
	SEL exCommandSelector;
	id delegate;
}

- (NSView *)view;
- (void)setDelegate:(id)aDelegate;
- (void)setFilename:(NSURL *)aURL;
- (void)setString:(NSString *)aString;
- (IBAction)finishedExCommand:(id)sender;
- (void)message:(NSString *)fmt, ...;
- (void)getExCommandForTextView:(ViTextView *)aTextView selector:(SEL)aSelector;
- (NSUndoManager *)undoManager;
- (NSData *)saveData;
- (void)changeTheme:(ViTheme *)theme;

@end
