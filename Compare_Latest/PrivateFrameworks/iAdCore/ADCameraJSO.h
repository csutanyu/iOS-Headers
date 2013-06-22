/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iAdCore/ADJavaScriptObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface ADCameraJSO : ADJavaScriptObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    id <ADJSODelegate> _delegate;
    NSString *_currentPictureURI;
    NSString *_internalPictureURI;
}

+ (void)initializeInContext:(struct OpaqueJSContext *)arg1;
+ (id)scriptSelectors;
+ (id)scriptingKeys;
@property(copy, nonatomic) NSString *internalPictureURI; // @synthesize internalPictureURI=_internalPictureURI;
@property(copy, nonatomic) NSString *currentPictureURI; // @synthesize currentPictureURI=_currentPictureURI;
@property(nonatomic) id <ADJSODelegate> delegate; // @synthesize delegate=_delegate;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_finishWithSuccess:(BOOL)arg1;
- (void)present:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_presentCamera;
- (void)_setCurrentImage:(struct CGImage *)arg1;
- (id)init;
- (void)dealloc;

@end
