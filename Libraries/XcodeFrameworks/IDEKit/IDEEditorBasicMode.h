/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEEditorModeViewController.h>

@interface IDEEditorBasicMode : IDEEditorModeViewController
{
}

+ (id)stateSavingIdentifiers;
- (id)_liftEditorLayoutConfigurationForIdentifier:(id)arg1;
- (id)_persistentRepresentationForIdentifier:(id)arg1;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (void)_stampEditorLayoutConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)_stealPrimaryEditorContext;
- (BOOL)canCreateSplitForNavigationHUD;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)discardEditing;
- (id)editorContexts;
- (void)loadView;

@end

