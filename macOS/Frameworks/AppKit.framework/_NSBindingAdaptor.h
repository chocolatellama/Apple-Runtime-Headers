//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSBindingAdaptor : NSObject
{
    NSMutableArray *_binders;
    id _editableBinder;
    id _referenceBinder;
    id _contentBinder;
}

+ (void)reconnectBindings:(id)arg1;
+ (id)returnDisconnectedBindingsOfObject:(id)arg1;
+ (void)copyBindingsFromObject:(id)arg1 toObject:(id)arg2;
- (void)controller:(id)arg1 didChangeToFilterPredicate:(id)arg2;
- (void)controller:(id)arg1 didChangeToSortDescriptors:(id)arg2;
- (void)controller:(id)arg1 didChangeToSelectionIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didChangeToSelectionIndexes:(id)arg2;
- (BOOL)setEnabledStateForToolbarItem:(id)arg1;
- (BOOL)enabledStateForMenuItem:(id)arg1;
- (id)searchMenuTemplate;
- (id)updateInvalidatedTextColor:(id)arg1 forObject:(id)arg2;
- (id)updateInvalidatedFont:(id)arg1 forObject:(id)arg2;
- (id)updateInvalidatedObjectValue:(id)arg1 forObject:(id)arg2;
- (void)searchFieldCellOrControlDidClearRecents:(id)arg1;
- (void)selectionMechanismWasDismissed:(id)arg1;
- (id)defaultSortDescriptorPrototypeForTableColumn:(id)arg1;
- (void)tableColumn:(id)arg1 didChangeToWidth:(double)arg2;
- (void)tableColumn:(id)arg1 willDisplayCell:(id)arg2 row:(long long)arg3;
- (void)outlineView:(id)arg1 willCollapseItem:(id)arg2;
- (void)outlineView:(id)arg1 didExpandItem:(id)arg2;
- (void)outlineColumn:(id)arg1 willDisplayCell:(id)arg2 row:(long long)arg3;
- (void)outlineColumn:(id)arg1 willDisplayOutlineCell:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 updateVisibleRowInformation:(struct _NSRange)arg2;
- (void)tableView:(id)arg1 didChangeToSelectedRowIndexes:(id)arg2;
- (void)tableView:(id)arg1 didChangeToSortDescriptors:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)collectionView:(id)arg1 didChangeToSelectionIndexes:(id)arg2;
- (void)drawer:(id)arg1 didChangeToState:(BOOL)arg2;
- (void)window:(id)arg1 didSetTitle:(id)arg2;
- (void)windowDidResize:(id)arg1;
- (void)window:(id)arg1 didChangeToVisibleState:(BOOL)arg2;
- (void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
- (void)browser:(id)arg1 createRowsForColumn:(long long)arg2 inMatrix:(id)arg3;
- (BOOL)browser:(id)arg1 selectRow:(long long)arg2 inColumn:(long long)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)outlineView:(id)arg1 willDisplayOutlineCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (long long)boundOutlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (BOOL)validateAndCommitValueInEditor:(id)arg1 editingIsEnding:(BOOL)arg2 errorUserInterfaceHandled:(char *)arg3;
- (BOOL)_validateAndCommitValueInEditor:(id)arg1 editingIsEnding:(BOOL)arg2 errorUserInterfaceHandled:(char *)arg3 bindingAdaptor:(id)arg4;
- (BOOL)handleValidationError:(id)arg1 description:(id)arg2 inEditor:(id)arg3 errorUserInterfaceHandled:(char *)arg4;
- (BOOL)_handleValidationError:(id)arg1 description:(id)arg2 inEditor:(id)arg3 errorUserInterfaceHandled:(char *)arg4 bindingAdaptor:(id)arg5;
- (void)editorDidEndEditing:(id)arg1;
- (void)editorDidBeginEditing:(id)arg1;
- (void)_editor:(id)arg1 didChangeEditingState:(BOOL)arg2 bindingAdaptor:(id)arg3;
- (void)objectDidTriggerAction:(id)arg1;
- (void)objectDidTriggerDoubleClickAction:(id)arg1;
- (void)_objectDidTriggerAction:(id)arg1 bindingAdaptor:(id)arg2;
- (void)_discardEditingForAllBinders;
- (id)contentBinder;
- (id)referenceBinder;
- (id)editableBinder;
- (void)resumeBinderObserving;
- (void)suspendBinderObserving;
- (id)binders;
- (void)removeBinder:(id)arg1;
- (void)addBinder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

