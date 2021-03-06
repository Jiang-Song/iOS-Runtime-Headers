/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CAShapeLayer, UIBezierPath;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {
    float _cornerRadius;
    BOOL _customFillColor;
    BOOL _customStrokeColor;
    CAShapeLayer *_lighteningOutline;
    float _outlineAlpha;
}

@property float cornerRadius;
@property(readonly) UIBezierPath * customPath;
@property float outlineAlpha;

+ (id)_fillColor:(BOOL)arg1;
+ (id)_strokeColor:(BOOL)arg1;
+ (Class)layerClass;

- (id)_fillColor:(BOOL)arg1;
- (id)_layer;
- (float)_pathInset;
- (float)_pixelAlignment;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_strokeColor:(BOOL)arg1;
- (void)_updateLightingOutlinePath;
- (void)_updatePath;
- (float)cornerRadius;
- (id)customPath;
- (void)dealloc;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 active:(BOOL)arg2;
- (float)lineWidth;
- (float)outlineAlpha;
- (void)setActive:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFillColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLineWidth:(float)arg1;
- (void)setLineWidth:(float)arg1 updatePath:(BOOL)arg2;
- (void)setOutlineAlpha:(float)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
