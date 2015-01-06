/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "NSSplitViewDelegate-Protocol.h"

@class DVTBorderedView, DVTSegmentedControl, IDEComparisonEditor;

@interface IDEComparisonToolbar : IDEViewController <NSSplitViewDelegate>
{
    IDEComparisonEditor *_comparisonEditor;
    DVTBorderedView *_toolbarContainerView;
    DVTSegmentedControl *_submodeSegmentedControl;
}

+ (id)keyPathsForValuesAffectingEditorSubmode;
@property IDEComparisonEditor *comparisonEditor; // @synthesize comparisonEditor=_comparisonEditor;
@property int editorSubmode;
- (id)initWithComparisonEditor:(id)arg1;
- (void)loadView;
@property DVTSegmentedControl *submodeSegmentedControl; // @synthesize submodeSegmentedControl=_submodeSegmentedControl;
@property DVTBorderedView *toolbarContainerView; // @synthesize toolbarContainerView=_toolbarContainerView;
- (void)viewDidInstall;

@end

