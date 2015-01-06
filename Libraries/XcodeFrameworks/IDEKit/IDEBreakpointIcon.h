/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage;

@interface IDEBreakpointIcon : NSObject
{
    struct CGSize _size;
    BOOL _includeBottomHighlight;
    NSImage *_enabledImage;
    NSImage *_disabledImage;
    NSImage *_deactivatedEnabledImage;
    NSImage *_deactivatedDisabledImage;
}

+ (id)_createPressedImageFromImage:(id)arg1;
+ (double)tipLengthForBreakpointHeight:(double)arg1;
- (id)_cachedImageForBreakpointsActivated:(BOOL)arg1 breakpointEnabled:(BOOL)arg2 pressed:(BOOL)arg3;
- (id)_createBreakpointPathWithFrame:(struct CGRect)arg1;
- (id)_createImageUsingBorderColor:(id)arg1 topGradientColor:(id)arg2 bottomGradientColor:(id)arg3;
- (id)_deactivatedDisabledImage;
- (id)_deactivatedEnabledImage;
- (id)_disabledImage;
- (id)_enabledImage;
- (void)drawBreakpointAtPoint:(struct CGPoint)arg1 inView:(id)arg2 breakpointsActivated:(BOOL)arg3 breakpointEnabled:(BOOL)arg4 pressed:(BOOL)arg5;
- (id)initWithHeight:(double)arg1 includeBottomHighlight:(BOOL)arg2;
- (id)initWithSize:(struct CGSize)arg1 includeBottomHighlight:(BOOL)arg2;
- (struct CGSize)visualPlacementSize;

@end

