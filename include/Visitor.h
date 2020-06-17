#ifndef STATICSCRIPT_VISITOR_H
#define STATICSCRIPT_VISITOR_H

#include "StaticScriptParserBaseVisitor.h"

class Visitor : public StaticScriptParserBaseVisitor {
public:
    antlrcpp::Any visitModule(StaticScriptParser::ModuleContext *ctx) override;

    antlrcpp::Any visitStatements(StaticScriptParser::StatementsContext *ctx) override;

    antlrcpp::Any visitStatement(StaticScriptParser::StatementContext *ctx) override;

    antlrcpp::Any visitDeclaration(StaticScriptParser::DeclarationContext *ctx) override;

    antlrcpp::Any visitVariableDeclaration(StaticScriptParser::VariableDeclarationContext *ctx) override;

    antlrcpp::Any visitVariableDeclarators(StaticScriptParser::VariableDeclaratorsContext *ctx) override;

    antlrcpp::Any visitVariableModifier(StaticScriptParser::VariableModifierContext *ctx) override;

    antlrcpp::Any visitVariableDeclarator(StaticScriptParser::VariableDeclaratorContext *ctx) override;

    antlrcpp::Any visitTypeAnnotation(StaticScriptParser::TypeAnnotationContext *ctx) override;

    antlrcpp::Any visitVariableInitializer(StaticScriptParser::VariableInitializerContext *ctx) override;

    antlrcpp::Any visitPredefinedType(StaticScriptParser::PredefinedTypeContext *ctx) override;

    antlrcpp::Any visitFunctionDeclaration(StaticScriptParser::FunctionDeclarationContext *ctx) override;

    antlrcpp::Any visitCallSignature(StaticScriptParser::CallSignatureContext *ctx) override;

    antlrcpp::Any visitParameterList(StaticScriptParser::ParameterListContext *ctx) override;

    antlrcpp::Any visitFunctionBody(StaticScriptParser::FunctionBodyContext *ctx) override;

    antlrcpp::Any visitFunctionCallExpression(StaticScriptParser::FunctionCallExpressionContext *ctx) override;

    antlrcpp::Any visitArgumentList(StaticScriptParser::ArgumentListContext *ctx) override;

    antlrcpp::Any visitCompoundStatement(StaticScriptParser::CompoundStatementContext *ctx) override;

    antlrcpp::Any visitExpressionStatement(StaticScriptParser::ExpressionStatementContext *ctx) override;

    antlrcpp::Any visitExpression(StaticScriptParser::ExpressionContext *ctx) override;

    antlrcpp::Any visitLiteral(StaticScriptParser::LiteralContext *ctx) override;

    antlrcpp::Any visitSelectionStatement(StaticScriptParser::SelectionStatementContext *ctx) override;

    antlrcpp::Any visitIfElseStatement(StaticScriptParser::IfElseStatementContext *ctx) override;

    antlrcpp::Any visitIterationStatement(StaticScriptParser::IterationStatementContext *ctx) override;

    antlrcpp::Any visitForInitExpr(StaticScriptParser::ForInitExprContext *ctx) override;

    antlrcpp::Any visitForCondExpr(StaticScriptParser::ForCondExprContext *ctx) override;

    antlrcpp::Any visitForLoopExpr(StaticScriptParser::ForLoopExprContext *ctx) override;

    antlrcpp::Any visitExpressionList(StaticScriptParser::ExpressionListContext *ctx) override;

    antlrcpp::Any visitJumpStatement(StaticScriptParser::JumpStatementContext *ctx) override;

    antlrcpp::Any visitContinueStatement(StaticScriptParser::ContinueStatementContext *ctx) override;

    antlrcpp::Any visitBreakStatement(StaticScriptParser::BreakStatementContext *ctx) override;

    antlrcpp::Any visitReturnStatement(StaticScriptParser::ReturnStatementContext *ctx) override;
};


#endif //STATICSCRIPT_VISITOR_H
