/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTEditor-Protocol.h"
#import "DVTReplacementViewDelegate-Protocol.h"
#import "DVTStatefulObject-Protocol.h"
#import "DVTTabbedWindowTabContentControlling-Protocol.h"
#import "IDEEditorAreaContainer-Protocol.h"
#import "IDEStructureEditingWorkspaceTabContext-Protocol.h"
#import "IDEWorkspaceDocumentProvider-Protocol.h"

@class DVTMutableOrderedSet, DVTReplacementView, DVTSplitView, DVTSplitViewItem, DVTStackBacktrace, IDEARCConversionAssistantContext, IDEBuildAlertMonitor, IDEEditorArea, IDELaunchSession, IDENavigatorArea, IDERunAlertMonitor, IDEWorkspace, IDEWorkspaceDocument, IDEWorkspaceWindowController, NSAlert, NSDocument<DVTTabbedWindowCreation>, NSMapTable, NSMutableArray, NSString;

@interface IDEWorkspaceTabController : IDEViewController <DVTTabbedWindowTabContentControlling, DVTStatefulObject, DVTReplacementViewDelegate, IDEEditorAreaContainer, IDEStructureEditingWorkspaceTabContext, IDEWorkspaceDocumentProvider, DVTEditor>
{
    DVTSplitView *_designAreaSplitView;
    DVTReplacementView *_navReplacementView;
    DVTReplacementView *_editorReplacementView;
    DVTSplitView *_utilityAreaSplitView;
    DVTSplitViewItem *_navigatorAreaSplitViewItem;
    DVTSplitViewItem *_utilitiesAreaSplitViewItem;
    DVTReplacementView *_inspectorReplacementView;
    DVTReplacementView *_libraryReplacementView;
    id _downwardForwarder;
    DVTMutableOrderedSet *_cursorRectInterceptors;
    int _assistantEditorsLayout;
    NSString *_name;
    IDELaunchSession *_currentLaunchSession;
    IDEWorkspaceDocument *_workspaceDocument;
    NSMapTable *_controllerForDebugSessionTable;
    NSMapTable *_additionControllersForLaunchSessionTable;
    NSMutableArray *_debuggingUIControllerLifeCycleObservers;
    NSString *_userDefinedTabLabel;
    NSString *_lastValidUserDefinedName;
    NSString *_savedTabLabel;
    id <DVTObservingToken> _mainCurrentLaunchSessionObserverToken;
    id <DVTObservingToken> _launchSessionStateObserverToken;
    id <DVTObservingToken> _debugSessionObserverToken;
    id <DVTObservingToken> _debugSessionCoalescedStateObservingToken;
    id <DVTObservingToken> _documentLoadingObservationToken;
    id <DVTObservingToken> _firstIssueObservationToken;
    id <DVTObservingToken> _buildCompleteObservationToken;
    id <DVTObservingToken> _inMiniDebuggingModeObservingToken;
    id <DVTObservingToken> _userWantsMiniDebuggingConsoleObservingToken;
    id <DVTObservingToken> _firstTimeSnapshotObserverToken;
    NSAlert *_stoppingExecutionAlert;
    id _pendingExecutionNotificationToken;
    IDEBuildAlertMonitor *_buildAlertMonitor;
    IDERunAlertMonitor *_runAlertMonitor;
    DVTStackBacktrace *_creationBacktrace;
    IDEARCConversionAssistantContext *_conversionAssistantContext;
    BOOL _isAnimatingUtilities;
    BOOL _userWantsUtilitiesVisible;
    BOOL _userWantsNavigatorVisible;
    BOOL _stateRestoreCompleted;
    BOOL _tabLoadingCompleted;
}

+ (BOOL)automaticallyNotifiesObserversOfCurrentLaunchSession;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (int)defaultAssistantEditorsLayout;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingActiveEditorArea;
+ (id)keyPathsForValuesAffectingNavigatorArea;
+ (id)keyPathsForValuesAffectingShowNavigator;
+ (id)keyPathsForValuesAffectingShowUtilities;
+ (id)keyPathsForValuesAffectingTabLabel;
+ (id)keyPathsForValuesAffectingWindowController;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (void)setDefaultAssistantEditorsLayout:(int)arg1;
+ (long long)version;
- (void)__buildAndActionAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_acceptStoppingExecutionAlert:(id)arg1;
- (void)_actuallyPerformContextTask:(int)arg1 command:(id)arg2 commandName:(id)arg3 buildCommand:(int)arg4 filePath:(id)arg5 completionBlock:(id)arg6;
- (void)_addCursorRectInterceptor:(id)arg1;
- (void)_adjustDesignAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (void)_adjustUtilityAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (void)_alertNonExistentWorkingDirectoryBeforeProfileForContext:(id)arg1 usingBlock:(id)arg2;
- (void)_alertNonExistentWorkingDirectoryBeforeRunForContext:(id)arg1 usingBlock:(id)arg2;
- (void)_alertNonExistentWorkingDirectoryBeforeRunOrProfileAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_alertNonExistentWorkingDirectoryBeforeRunOrProfileForContext:(id)arg1 workingDirectory:(id)arg2 title:(id)arg3 defaultButton:(id)arg4 usingBlock:(id)arg5;
- (void)_arcConversionFoundErrorsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_askShouldBuildBeforeRunOrProfileForContext:(id)arg1 title:(id)arg2 defaultButton:(id)arg3 usingBlock:(id)arg4;
- (void)_changeToAssistantLayoutForActionSelector:(SEL)arg1;
- (void)_changeToEditorMode:(int)arg1;
- (void)_changeToNavigatorWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)_changeToVersionEditorSubmode:(int)arg1;
- (id)_choiceWithKeyEquivalent:(id)arg1 modifierFlags:(unsigned long long)arg2 inUtilityArea:(id)arg3;
- (BOOL)_cleanBuildFolderWithExecutionContext:(id)arg1 commandName:(id)arg2 error:(id *)arg3;
- (void)_cleanupAfterStoppingExecutionAlert;
- (BOOL)_contentSizeCanBeZeroSize;
- (id)_currentFirstResponderArea;
- (void)_debugSessionCoalescedStateChanged:(id)arg1;
- (void)_doCommandForEditAndSchemeCommand:(int)arg1;
- (void)_doCommandForEditAndSchemeCommand:(int)arg1 schemeTask:(int)arg2;
- (void)_doRecordLibrarySplitSize;
- (void)_doRecordNavigationSplitSize;
- (void)_doRecordUtilitySplitSize;
- (id)_framesForDesignAreaWithNavigatorState:(int)arg1 editorAreaState:(int)arg2 utilityAreaState:(int)arg3 forSize:(struct CGSize)arg4;
- (BOOL)_interceptAddCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3 inWindow:(id)arg4;
- (BOOL)_interceptSetCursorForMouseLocation:(struct CGPoint)arg1 inWindow:(id)arg2;
- (void)_interceptWillInvalidateCursorRectsForView:(id)arg1;
- (id)_keyboardFocusAreas;
- (BOOL)_launchingOrProfiling:(int)arg1 withNonExistentWorkingDirectory:(id)arg2;
- (void)_moveKeyboardFocusToNextAreaForward:(BOOL)arg1;
- (void)_notifyDebuggingAdditionUIControllerLifeCycleObserversOfInvalidated:(id)arg1;
- (void)_notifyDebuggingAdditionUIControllerLifeCycleObserversOfUpdated:(id)arg1;
- (void)_performContextTask:(int)arg1 command:(id)arg2 commandName:(id)arg3 buildCommand:(int)arg4 filePath:(id)arg5 completionBlock:(id)arg6;
- (void)_performExtraViewDidInstallWork;
- (void)_primitiveSetAssistantEditorsLayout:(int)arg1;
- (void)_pushDefaultPrimaryEditorFrameSize;
- (void)_recordLibrarySplitSize;
- (void)_recordNavigationSplitSize;
- (void)_recordUtilitySplitSize;
- (void)_rejectStoppingExecutionAlert:(id)arg1;
- (void)_removeCursorRectInterceptor:(id)arg1;
- (void)_revertStateForNewWindowWithDictionary:(id)arg1 simpleEditorWindowLayout:(BOOL)arg2;
- (void)_runAnotherInstance:(id)arg1;
- (void)_setDebuggingWindowBehavior:(int)arg1;
- (void)_showWarningForBuild:(BOOL)arg1 forTest:(BOOL)arg2 forOtherExecution:(BOOL)arg3 trackersToStop:(id)arg4 taskActionBlock:(id)arg5;
- (void)_splitViewDidToggleClosed;
- (void)_updateForDebuggingKVOChange;
- (BOOL)_validateEditorLayoutUserInterfaceItem:(id)arg1 forActionSelector:(SEL)arg2;
- (void)_workspaceDocument:(id)arg1 shouldClose:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)addAssistantEditor:(id)arg1;
- (void)addDebuggingAdditionUIControllerLifeCycleObserver:(id)arg1;
- (void)analyzeActiveRunContext:(id)arg1;
- (void)askUserForProcessIdentifierToAttachTo:(id)arg1;
@property int assistantEditorsLayout; // @synthesize assistantEditorsLayout=_assistantEditorsLayout;
- (void)attachToProcess:(id)arg1;
- (void)buildActiveRunContext:(id)arg1;
- (void)buildAndArchiveActiveRunContext:(id)arg1;
@property id <DVTObservingToken> buildCompleteObservationToken; // @synthesize buildCompleteObservationToken=_buildCompleteObservationToken;
- (void)buildForArchiveActiveRunContext:(id)arg1;
- (void)buildForInstallActiveRunContext:(id)arg1;
- (void)buildForProfileActiveRunContext:(id)arg1;
- (void)buildForRunActiveRunContext:(id)arg1;
- (void)buildForTestActiveRunContext:(id)arg1;
- (void)cancelCurrentExecution:(id)arg1;
- (void)changeToAssistantLayout_BH:(id)arg1;
- (void)changeToAssistantLayout_BV:(id)arg1;
- (void)changeToAssistantLayout_LH:(id)arg1;
- (void)changeToAssistantLayout_LV:(id)arg1;
- (void)changeToAssistantLayout_RH:(id)arg1;
- (void)changeToAssistantLayout_RV:(id)arg1;
- (void)changeToAssistantLayout_TH:(id)arg1;
- (void)changeToAssistantLayout_TV:(id)arg1;
- (void)changeToBreakpointsNavigator:(id)arg1;
- (void)changeToDebuggerNavigator:(id)arg1;
- (void)changeToFindNavigator:(id)arg1;
- (void)changeToGeniusEditor:(id)arg1;
- (void)changeToIssuesNavigator:(id)arg1;
- (void)changeToLogsNavigator:(id)arg1;
- (void)changeToStandardEditor:(id)arg1;
- (void)changeToStructureNavigator:(id)arg1;
- (void)changeToSymbolsNavigator:(id)arg1;
- (void)changeToVersionEditor:(id)arg1;
- (void)changeToVersionEditorBlameView:(id)arg1;
- (void)changeToVersionEditorComparisonView:(id)arg1;
- (void)changeToVersionEditorLogView:(id)arg1;
- (void)cleanActiveRunContext:(id)arg1;
- (void)cleanBuildFolder:(id)arg1;
- (void)cleanBuildFolderAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)clearConsole:(id)arg1;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)commitStateToDictionary:(id)arg1;
- (void)createSnapshot:(id)arg1;
@property(readonly) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (id)currentDebuggingAdditionUIControllers;
@property IDELaunchSession *currentLaunchSession; // @synthesize currentLaunchSession=_currentLaunchSession;
- (id)debugSessionController;
- (void)discardEditing;
@property NSDocument<DVTTabbedWindowCreation> *document;
@property id <DVTObservingToken> documentLoadingObservationToken; // @synthesize documentLoadingObservationToken=_documentLoadingObservationToken;
- (id)downwardForwarder;
- (void)editActiveRunContext:(id)arg1;
- (void)editAndAnalyzeActiveRunContext:(id)arg1;
- (void)editAndBuildForProfilingActiveScheme:(id)arg1;
- (void)editAndBuildForRunningActiveRunContext:(id)arg1;
- (void)editAndBuildForTestingActiveRunContext:(id)arg1;
- (void)editAndProfileActiveScheme:(id)arg1;
- (void)editAndRunActiveRunContext:(id)arg1;
- (void)editAndTestActiveRunContext:(id)arg1;
- (void)editBuildAndArchiveActiveRunContext:(id)arg1;
- (void)editWorkspaceUserSettings:(id)arg1;
@property(readonly) IDEEditorArea *editorArea;
@property DVTReplacementView *editorReplacementView; // @synthesize editorReplacementView=_editorReplacementView;
- (void)filterInLibrary:(id)arg1;
- (void)filterInNavigator:(id)arg1;
@property id <DVTObservingToken> firstIssueObservationToken; // @synthesize firstIssueObservationToken=_firstIssueObservationToken;
- (void)focusOnLibraryFilter;
- (void)generateAssemblyCodeForFilePath:(id)arg1 forSchemeCommand:(int)arg2;
- (void)generatePreprocessedFileForFilePath:(id)arg1 forSchemeCommand:(int)arg2;
- (void)hideNavigator:(id)arg1;
- (void)hideUtilitiesArea:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inspectorArea;
- (void)installActiveRunContext:(id)arg1;
- (void)invalidate;
- (void)invalidateAllBuildAlertMonitors;
- (BOOL)isActiveWorkspaceTabController;
@property BOOL isAnimatingUtilities; // @synthesize isAnimatingUtilities=_isAnimatingUtilities;
- (BOOL)isNavigatorVisible;
- (BOOL)isUtilitiesAreaVisible;
- (id)libraryArea;
- (void)loadView;
- (void)manageRunContexts:(id)arg1;
- (struct CGSize)minimumSizeForDesignArea;
- (struct CGSize)minimumSizeForDesignAreaIfNavigatorVisible:(BOOL)arg1 editorVisisble:(BOOL)arg2 andUtilityAreaVisible:(BOOL)arg3;
- (struct CGSize)minimumSizeForView:(id)arg1;
- (void)moveKeyboardFocusToNextArea:(id)arg1;
- (void)moveKeyboardFocusToPreviousArea:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) IDENavigatorArea *navigatorArea;
@property DVTReplacementView *navigatorReplacementView; // @synthesize navigatorReplacementView=_navReplacementView;
- (void)newRunContext:(id)arg1;
- (void)newWindow:(id)arg1;
- (void)observeBuildOperationForRestoringState:(id)arg1;
- (void)pauseOrContinue:(id)arg1;
- (void)performCloseWorkspace:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)profileActiveScheme:(id)arg1;
- (void)profileActiveSchemeWithoutBuilding:(id)arg1;
- (void)reallyCleanBuildFolder;
- (void)removeAssistantEditor:(id)arg1;
- (void)removeDebuggingAdditionUIControllerLifeCycleObserver:(id)arg1;
- (void)replacementView:(id)arg1 willDisplayInRect:(struct CGRect)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)resetEditor:(id)arg1;
- (void)restoreSnapshot:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)runActiveRunContext:(id)arg1;
- (void)runActiveRunContextWithoutBuilding:(id)arg1;
@property(copy) NSString *savedTabLabel; // @synthesize savedTabLabel=_savedTabLabel;
- (void)setDebuggingWindowBehaviorNormal:(id)arg1;
- (void)setDebuggingWindowBehaviorXcodeBehind:(id)arg1;
- (void)setDebuggingWindowBehaviorXcodeInFront:(id)arg1;
- (void)setNextResponder:(id)arg1;
- (void)setShowDisassemblyWhenDebugging:(id)arg1;
@property BOOL showNavigator;
@property BOOL showUtilities;
@property BOOL stateRestoreCompleted; // @synthesize stateRestoreCompleted=_stateRestoreCompleted;
@property BOOL tabLoadingCompleted; // @synthesize tabLoadingCompleted=_tabLoadingCompleted;
@property(copy) NSString *userDefinedTabLabel; // @synthesize userDefinedTabLabel=_userDefinedTabLabel;
@property BOOL userWantsNavigatorVisible; // @synthesize userWantsNavigatorVisible=_userWantsNavigatorVisible;
@property BOOL userWantsUtilitiesVisible; // @synthesize userWantsUtilitiesVisible=_userWantsUtilitiesVisible;
@property IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void)showARCConversionAssistant:(id)arg1;
- (void)showInspectorWithChoice:(id)arg1;
- (void)showInspectorWithChoiceFromSender:(id)arg1;
- (void)showLibraryWithChoice:(id)arg1;
- (void)showLibraryWithChoiceFromSender:(id)arg1;
- (void)showNavigatorWithIdentifier:(id)arg1;
- (void)showSharedLibrariesPopUp:(id)arg1;
- (void)showUtilitiesArea:(id)arg1;
- (id)splitView:(id)arg1 additionalEffectiveRectsOfDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)splitView:(id)arg1 needsRectanglesForViewsWithState:(id)arg2 forSize:(struct CGSize)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)stepInto:(id)arg1;
- (void)stepIntoInstruction:(id)arg1;
- (void)stepIntoThread:(id)arg1;
- (void)stepOut:(id)arg1;
- (void)stepOver:(id)arg1;
- (void)stepOverInstruction:(id)arg1;
- (void)stepOverThread:(id)arg1;
@property(readonly) IDEWorkspace *structureEditWorkspace;
@property(readonly) IDEWorkspaceTabController *structureEditWorkspaceTabController;
- (void)switchNavigatorOnBuild;
@property(readonly) NSString *tabLabel;
- (void)testActiveRunContext:(id)arg1;
- (void)testActiveRunContextWithoutBuilding:(id)arg1;
- (void)toggleBreakpoints:(id)arg1;
- (void)toggleNavigatorsVisibility:(id)arg1;
- (void)toggleUtilitiesVisibility:(id)arg1;
- (void)toggleUtilitiesVisibilityAlternate:(id)arg1;
- (void)updateMinimumWindowSize:(BOOL)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewMemory:(id)arg1;
- (void)viewWillUninstall;
@property(readonly) IDEWorkspaceWindowController *windowController;
- (id)workspace;
- (void)workspaceWindowIsClosing;

@end

