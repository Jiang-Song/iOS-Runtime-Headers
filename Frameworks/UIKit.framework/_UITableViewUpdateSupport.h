/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UITableViewRowData, UITableView, NSMutableIndexSet, UIView, NSMutableArray;

@interface _UITableViewUpdateSupport : NSObject {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    id _context;
    UIView **animatedCells;
    UIView **animatedFooters;
    UIView **animatedHeaders;
    NSMutableArray *deletedSections;
    NSInteger globalReorderingRow;
    NSMutableArray *insertedSections;
    NSInteger newGlobalRow;
    NSInteger newGlobalRowCount;
    NSInteger *newGlobalRowMap;
    UITableViewRowData *newRowData;
    } newRowRange;
    NSInteger newSection;
    NSInteger newSectionCount;
    NSInteger *newSectionMap;
    } newTableViewVisibleBounds;
    NSInteger oldGlobalRow;
    NSInteger oldGlobalRowCount;
    NSInteger *oldGlobalRowMap;
    UITableViewRowData *oldRowData;
    } oldRowRange;
    NSInteger oldSection;
    NSInteger oldSectionCount;
    NSInteger *oldSectionMap;
    } oldTableViewVisibleBounds;
    NSMutableIndexSet *rows;
    UITableView *tableView;
    float tableViewVisibleBoundsOffset;
    } tableViewVisibleBoundsUnion;
    NSArray *updateItems;
    NSMutableArray *viewAnimations;
    } visibleRows;
}

- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1;
- (void)_computeRowUpdates;
- (void)_computeSectionUpdates;
- (void)_computeVisibleBounds;
- (id)_imageViewForView:(id)arg1;
- (BOOL)_isReloadSectionUpdate;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationForTableFooter;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationStructures;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupDeleteAnimationForFooterInSection:(NSInteger)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForHeaderInSection:(NSInteger)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForFooterInSection:(NSInteger)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForHeaderInSection:(NSInteger)arg1 withTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forUpdateItem:(id)arg3;
- (void)_validateAnimatedCells;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg5 newRowRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg6 context:(id)arg7;

@end