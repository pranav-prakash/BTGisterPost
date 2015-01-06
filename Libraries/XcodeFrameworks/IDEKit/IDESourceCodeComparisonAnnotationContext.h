/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEAnnotationContext.h>

#import "DVTSourceCodeComparisonAnnotationContext-Protocol.h"

@class DVTDiffDescriptor, DVTDiffSession, NSURL;

@interface IDESourceCodeComparisonAnnotationContext : IDEAnnotationContext <DVTSourceCodeComparisonAnnotationContext>
{
    NSURL *_documentURL;
    int _dataSourceType;
    DVTDiffDescriptor *_diffDescriptor;
    DVTDiffSession *_diffSession;
}

+ (BOOL)scrollbarMarkerHighlight;
+ (BOOL)wantsScrollbarMarker;
@property int dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property DVTDiffDescriptor *diffDescriptor; // @synthesize diffDescriptor=_diffDescriptor;
@property DVTDiffSession *diffSession; // @synthesize diffSession=_diffSession;
@property NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (id)init;
- (id)initWithEditor:(id)arg1 document:(id)arg2 fileDataType:(id)arg3 workspaceTabController:(id)arg4 documentURL:(id)arg5 dataSourceType:(int)arg6 diffDescriptor:(id)arg7 diffSession:(id)arg8;
- (id)initWithEditor:(id)arg1 document:(id)arg2 workspaceTabController:(id)arg3;
- (id)initWithFileDataType:(id)arg1;

@end

